printf
的使用案例 
#include"stdio.h" 
void main() 
{  
int a=65; 
float d=5.8; 
char c='a'; 
printf("output variale:%d,%6.3f,%c\n",a,d,c); 

getchar
的使用案例 
#include"stdio.h" 
void main() 
{ 
char c;  
printf("please input a char\n"); 
c=getchar(); 
printf("%c\n",c); 
printf("%d\n",c); 
} 

/*将小写字母转换成大写字母*/ 
#include"stdio.h" 
void main() 
{  char c; 
/*设计输入*/ 
c=getchar(); 
/*将c小写字母转换成大写字母*/ 
c=c-32; 
 /*设计输出*/ 
printf("转换成的大写字母是:%c\n",c); 
 
//输入三角形的三条边，求三角形的面积
#include"stdio.h" 
#include"math.h" 
void main() 
{ 
//定义变量
float a,b,c,s,area; 
//设计输入
printf("请输入三条边:\n"); 
 scanf("%f%f%f",&a,&b,&c); 
 s=1.0/2*(a+b+c); 
area=sqrt(s*(s-a)*(s-b)*(s-c));  
//设计输出
printf("area=%f",area); 
} 
 
