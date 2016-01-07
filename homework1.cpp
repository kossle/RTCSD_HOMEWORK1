 1 #include<iostream>
 2 #include<Eigen/Dense>
 3 #include<math.h>
 4 using Eigen::MatrixXd;
 5 using namespace std;
 6 
 7 int main() 
 8 {
 9     string Name,Action;
10     int PointNumber,ActionNumber;
11     double PointOneX,PointOneY,PointTwoX,PointTwoY,PointThreeX,PointThreeY,MoveX=0,MoveY=0,RotateAngle=0;
12     MatrixXd TotateMatrix(2,2),FinalMatrix;
13     MatrixXd InputMatrix1(1,2),InputMatrix2(2,2),InputMatrix3(3,2),MoveMatrix1(1,2),MoveMatrix2(2,2),MoveMatrix3(3,2);
14     
15     cout<<"please input the information:";
16     cin>>Name;
17     cin>>PointNumber;
18     switch(PointNumber)      //确定输入点构成的矩阵； 
19         {
20             case 1: cin>>PointOneX;cin>>PointOneY;
21                     InputMatrix1<<PointOneX,PointOneY;break;
22                     
23             case 2:    cin>>PointOneX;cin>>PointOneY;cin>>PointTwoX;cin>>PointTwoY;
24                     InputMatrix2<<PointOneX,PointOneY,
25                                  PointTwoX,PointTwoY;break;
26                     
27             case 3: cin>>PointOneX;cin>>PointOneY;cin>>PointTwoX;cin>>PointTwoY;cin>>PointThreeX;cin>>PointThreeY;
28                     InputMatrix3<<PointOneX,PointOneY,
29                                   PointTwoX,PointTwoY,
30                                   PointThreeX,PointThreeY;break;
31                    
32             default: cout<<"error";return 0;
33         }
34     
35     cin>>Action;
36     if(Action=="move") {ActionNumber=7;cin>>MoveX;cin>>MoveY;}
37        else {ActionNumber=11;cin>>RotateAngle;}
38     RotateAngle=RotateAngle*M_PI/180;
39     
40     switch(ActionNumber*PointNumber)     //实现平移或旋转运动； 
41         {
42             case 11:TotateMatrix<<cos(RotateAngle),sin(RotateAngle),
43                     -sin(RotateAngle),cos(RotateAngle);
44                     cout<<InputMatrix1*TotateMatrix;break;
45                     
46             case 22:TotateMatrix<<cos(RotateAngle),sin(RotateAngle),
47                     -sin(RotateAngle),cos(RotateAngle);
48                     cout<<InputMatrix2*TotateMatrix;break;
49                     
50             case 33:TotateMatrix<<cos(RotateAngle),sin(RotateAngle),
51                     -sin(RotateAngle),cos(RotateAngle);
52                     cout<<InputMatrix3*TotateMatrix;break;
53                     
54             case 7:MoveMatrix1<<MoveX,MoveY;
55                   cout<<InputMatrix1+MoveMatrix1;break;
56                   
57             case 14:MoveMatrix2<<MoveX,MoveY,
58                                   MoveX,MoveY;
59                     cout<<InputMatrix2+MoveMatrix2;break;
60                     
61             case 21:MoveMatrix3<<MoveX,MoveY,
62                                   MoveX,MoveY,
63                                   MoveX,MoveY;
64                     cout<<InputMatrix3+MoveMatrix3;break;
65         }
66     
67     return 0;
68 }
