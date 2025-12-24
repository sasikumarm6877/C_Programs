//1.)1. WAP in C to print array using int pointer.
//            i/p: int a[5]={11,22,33,44,55}, *p=a;
//            o/p: 11 22 33 44 55
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the index value :\n");
	scanf("%d",&n);
	int a[n];
	int *p;
	p=a;
	printf("Scan the elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("print the elements using pointer:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	printf("\n");
}
//2.)WAP in C to sort array in decending order .
//          i/p: int a[5]={11,55,88,22,44}, *p ;
//          o/p:88 55 44 22 11
#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter the index value :\n");
	scanf("%d",&n);
	int a[n];
	int *p;
	p=a;
	printf("Scan the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Before number :\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("After sort array in desending order :\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	printf("\n");
}
// 3.)WAP in C to sort 1st 4 ele of array in decending .
//           i/p: int a[7]={5,3,1,2,1,9,6};
//            o/p: 5 3 2 1 1 9 6
#include<stdio.h>
int main()
{
int n,t,i,j;
printf("Enter the index value :\n");
scanf("%d",&n);
printf("Scan the element from user :\n");
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<4;i++)
{
if(a[i]<a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
printf("After number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//4.)WAP in C to find sum of all array elements.
//         i/p: int a[5]={10,20,30,40,50};
//         o/p: 150
#include<stdio.h>
int main()
{
int n,i,j,t=0;
printf("Enter the index value :\n");
scanf("%d",&n);
printf("Scan the element from user :\n");
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
t=t+a[i];
printf("%d\n",t);
}
//5.)WAP in C to find sum of 1st digit of all array
//         i/p: int a[5]={123,23,89,3425,721};
//         o/p: 1+2+8+3+7 ----> 21
#include<stdio.h>
int main()
{
int n,i,t=0,num;
printf("Enter the index :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
int num=a[i];
while(num>=10)
num/=10;
t=t+num;
}
printf("%d\n",t);
}
//6.)WAP in C to delete 1st digit of all array elements.
//       i/p: int a[6]={12,234,321,45,654,1234};
//       o/p: int a[6]={2 , 34, 21, 5, 54, 234};
#include<stdio.h>
int main()
{
int n,i,count;
printf("Enter the index :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
int num=a[i];
int temp=num;
for(num,count=0;num>0;num/=10)
count++;
int div=1;
for(int j=1;j<count;j++)
div*=10;
a[i]=temp%div;
}
printf("After delet :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//7.)WAP in C to print binary of all elemets in array .
//        i/p: int a[5]={10,100,1000,100,10}
//        o/p:  0000 0000 0000 0000 0000 0000 0000 1010
//              0000 0000 0000 0000 0000 0000 0110 0100
//              0000 0000 0000 0000 0000 0011 1110 1000
//              0000 0000 0000 0000 0000 0000 0110 0100
//              0000 0000 0000 0000 0000 0000 0000 1010

#include<stdio.h>
int main()
{
int n,i,count;
printf("Enter the index :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
for(int pos=31,count=0;pos>=0;pos--)
{
if(count%4==0)
printf(" ");
printf("%d",a[i]>>pos&1);
count++;
}
printf("\n");
}
}
//8.)WAP in C to delete 0th bit of all array elements.
//        i/p: int a[5]={12,10,35,63,512};
//        o/p: int a[5]={ 6, 5,17,31,256};
#include<stdio.h>
int main()
{
int n,i,count,num;
printf("Enter the index :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
num=a[i];
num=num>>1;
a[i]=num;
}

for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//9.)WAP in C to count all set and clear bit array .
//         i/p: int a[5]={10,15,64,100,511};
//         o/p: set count =19 , clear count=141
#include<stdio.h>
int main()
{
int n,i,set=0,clear=0,pos;
printf("Enter the index :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
for(pos=31;pos>=0;pos--)
{
if((a[i]>>pos)&1)
set++;
else
clear++;
}
}
printf("set=%d clear=%d\n",set,clear);
}
//10.)WAP in C to store set bit count to another array.
//      i/p: int a[5]={10,15,64,100,511};
//      o/p: int b[5]={2 , 4, 1, 3, 9 };
#include<stdio.h>
int main()
{
int n,i,set,pos,j;
printf("Enter the index :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0,j=0;i<n;i++,j++)
{
for(pos=31,set=0;pos>=0;pos--)
{
if((a[i]>>pos)&1)
set++;
}
a[j]=set;
}
for(j=0;j<n;j++)
printf("%d ",a[j]);
printf("\n");
}
//11.)WAP in C to count -ve ,+ve, even , odd ele in array .
//       i/p: int a[10]={-11,11,12,-12,9,8,-3,10,22};
//       o/p: +ve = 6 , -ve = 3 , odd = 2 , even = 4
#include<stdio.h>
int main()
{
int n,i,positive=0,negative=0,odd=0,even=0;
printf("Enter the index :\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number :\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
if(a[i]>0)
{
positive++;
if(a[i]%2==0)
even++;
else
odd++;
}
else if(a[i]<0)
negative++;
}
printf("positive=%d negative=%d even=%d odd=%d\n",positive,negative,even,odd);
}
//12.)WAP in C to print Smallest element in array.
//      i/p : int a[6]={2,2,3,5,5,4};
//      o/p : res = 2
#include<stdio.h>
int main()
{
int n,i,small,t;
printf("Enter the index value :\n");
scanf("%d",&n);
printf("Scan the elements:\n");
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
small=a[0];
for(i=1;i<n;i++)
{
if(small>a[i])
{
small=a[i];
}
}
printf("%d\n",small);
}
//13.)WAP in C to print second largest element in array.
//       i/p : int a[7]={2,2,3,5,5,4,4};
//       o/p : second large = 4
#include<stdio.h>
int main()
{
int n,l,sl,i;
printf("Enter the index value\n");
scanf("%d",&n);
int a[n];
printf("Scan the number \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
if(a[0]>a[1])
{
l=a[0];
sl=a[1];
}
else if(a[1]>a[0])
{
l=a[1];
sl=a[0];
}
else if(a[0]==a[1])
l=sl=0;
for(i=2;i<n;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl && l!=a[i])
sl=a[i];
}
if(a[0]>l)
{
sl=l;
l=a[0];
}
else if(a[0]>sl)
sl=a[0];

printf("Second largest number l=%d sl=%d\n",l,sl);
}
//14.)WAP in C to print second smallest element in array.
//           i/p : int a[7]={2,2,1,5,5,4,4};
//           o/p : second small = 2
#include<stdio.h>
int main()
{
int n,i,fs,ss;
printf("Enter the index value \n");
scanf("%d",&n);
printf("scan the element\n");
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
if(a[0]>a[1])
{
fs=a[1];
ss=a[0];
}
else if(a[0]<a[1])
{
fs=a[0];
ss=a[1];
}
else if (a[0]==a[1])
{
fs=a[2];
ss=a[3];
}
for(i=3;i<n;i++)
{
if(a[i]<fs)
{
ss=fs;
fs=a[i];
}
else if(a[i]<ss && a[i]!=fs)
ss=a[i];
}
if(a[0]<fs)
{
ss=fs;
fs=a[0];
}
else if(a[0]<ss && a[0]!=fs)
ss=a[0];
printf("fs=%d ss=%d\n",fs,ss);
}
//15.)WAP in C to swap 3rd ele with 4th ele in array .
//            i/p: int a[6]={11,22,33,44,55,66};
//            o/p: 11 22 33 55 44, 66
#include<stdio.h>
int main()
{
int n,i,t;
printf("Enter the index value\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=3;i<4;i++)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("After number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//16.)WAP in C to swap(using bitwise) 0th ele with last ele in array using 2 pointer without any loop.
//            i/p: int a[6]={111,222,333,444,555,666}, *p,*q;
//            o/p: 666 222 333 444 555 111
#include<stdio.h>
int main()
{
int n,t,i;
printf("Enter the index value\n");
scanf("%d",&n);
int a[n],b[n];
printf("Scan the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
int *p,*q;
p=&a[0];
q=&a[5];
for(i=0;i<n;i++)
printf("%d ",*(q+i));
printf("\n");
}
//17.)WAP in C to sort 1st 3 element of array .
//        i/p: int a[7]={11,33,22,2,9,1,6};
//        o/p: 11 22 33 2 9 1 6
#include<stdio.h>
int main()
{
int n,i,t;
printf("Enter the index\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<2;i++)
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("After number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//18.)WAP to C to insert 99 on 0th index in same array .
//       i/p: int a[7]={2,3,5,7,11,13 }, in=0, num=99;
//       o/p: int a[7]={99, 2,3,5,7,11,13};
#include<stdio.h>
int main()
{
int n,i,index,new,j;
printf("Enter the index\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the new index\n");
scanf("%d",&index);
printf("Enter new element\n");
scanf("%d",&new);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(j=n;j>index;j--)
a[j]=a[j-1];
a[index]=new;
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//19.)WAP to C to insert 51 on 3rd index in same array .
//        i/p: int a[7]={2,3,5,7,11,13 },in=3 ,num=51;
//         o/p: int a[7]={2,3,5,51,7,11,13};
#include<stdio.h>
int main()
{
int n,i,index,new,j;
printf("Enter the index\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the new index\n");
scanf("%d",&index);
printf("Enter new element\n");
scanf("%d",&new);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=n;i>index;i--)
a[i]=a[i-1];
a[index]=new;
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//20.)WAP to C to insert 10 on sorted place in sorted array
//   i/p: int a[7]={2,3,5,7,11,13 }, num= 10;
//   o/p: int a[7]={2,3,5,7, 10, 11,13};
#include<stdio.h>
int main()
{
int n,i,index,new,j,t;
printf("Enter the index\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the new index\n");
scanf("%d",&index);
printf("Enter new element\n");
scanf("%d",&new);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=n;i>index;i--)
a[i]=a[i-1];
a[index]=new;
n++;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("After number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}//21.)WAP to C to insert 99 on 0th , 88 on 1st index in same array
//       i/p: int a[9]={30,11,45,34,14,8 ,50 },num=99 ;
//       o/p: int a[9]={99,88, 30,11,45,34,14,8, 50}
#include<stdio.h>
void main()
{
int n,i,index1,new1,index2,new2,j,t;
printf("Enter the index\n");
scanf("%d",&n);
int a[n];
printf("Scan the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the new index1\n");
scanf("%d",&index1);
printf("Enter new element1\n");
scanf("%d",&new1);
printf("Enter the new index2\n");
scanf("%d",&index2);
printf("Enter new element2\n");
scanf("%d",&new2);
printf("Before number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=n;i>index1;i--)
a[i]=a[i-1];
a[index1]=new1;
n++;
for(i=n;i>index2;i--)
a[i]=a[i-1];
a[index2]=new2;
n++;
printf("After number\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//22.)WAP in C to merge 2 array into 3rd array .
//         i/p: int a[3]={1,5,7}; b[3]={11,22,33};
//         o/p: int c[6]={1,11,5,22,7,33};
#include<stdio.h>
void main()
{
int a[3]={1,5,7},b[3]={11,22,33},c[6];
int i,j,ele;
ele=sizeof(a)/sizeof(a[0]);
for(i=0,j=0;i<3;i++)
{
c[j++]=a[i];
c[j++]=b[i];
ele;
}
for(i=0;i<6;i++)
printf("%d ",c[i]);
printf("\n");
}
// Anthor method
#include<stdio.h>
void main()
{
int a[3]={1,5,7},b[3]={11,22,33},c[6];
int i,j,ele;
ele=sizeof(a)/sizeof(a[0]);
for(i=0,j=0;i<ele;i++)
{
c[i*2]=a[i];
c[i*2+1]=b[i];
}
ele=ele+ele;
for(i=0;i<ele;i++)
printf("%d ",c[i]);
printf("\n");
}
//Anthor method
#include<stdio.h>
int main()
{
int a[3]={1,5,7},b[3]={11,22,33},c[6];
int i,j,k;
for(i=0,j=0,k=0;i<6;i++)
{
if(i%2==0)
{
c[i]=a[j];
j++;
}
else if(i%2!=0)
{
c[i]=b[k];
k++;
}
}
for(i=0;i<6;i++)
printf("%d ",c[i]);
printf("\n");
}
//23.)WAP in C to merge 2 array into 3rd array .
// i/p: int a[2]={1,5}; b[4]={11,22,33,44};
// o/p: int c[6]={1,11,5,22,33,44};
#include<stdio.h>
void main()
{
int a[2]={1,5},b[4]={11,22,33,44};
int i,j=0,k=0,c[6];
for(i=0;i<6;i++)
{
if(i%2==0 && j<2)
{
c[i]=a[j];
j++;
}
else if(k<4)
{
c[i]=b[k];
k++;
}
}
for(i=0;i<6;i++)
printf("%d ",c[i]);
printf("\n");
}
//24.)WAP in C to delete 0th index element from array
//        i/p: int a[5]={99,88,77,66,55}, in=0;
//        o/p: int a[5]={88,77,66,55};

#include<stdio.h>
void main()
{
int ele,in,i;
int a[5]={99,88,77,66,55};
ele=sizeof(a)/sizeof(a[0]);
scanf("%d",&in);
for(i=in;i<ele;i++)
a[i]=a[i+1];
ele--;
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//25.)WAP in C to delete 2nd index element from array
//       i/p: int a[5]={99,88,77,66,55}, pos=2;
//       o/p: int a[5]={99,88,66,55};
#include<stdio.h>
int main()
{
int a[5]={99,88,77,66,55},in,i,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the index delet\n");
scanf("%d",&in);
for(i=in;i<ele;i++)
a[i]=a[i+1];
ele--;
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//26.)WAP in C to delete 2nd,3rd index from array .
//         i/p: int a[5]={99,88,77,66,55}, pos1=2, pos2=3;
//         o/p: int a[5]={99,88,55};
#include<stdio.h>
int main()
{
int a[5]={99,88,77,66,55},in1,in2,i,ele;
scanf("%d",&in1);
scanf("%d",&in2);
ele=sizeof(a)/sizeof(a[0]);
for(i=in2;i<ele;i++)
a[i]=a[i+1];
ele--;
for(i=in1;i<ele;i++)
a[i]=a[i+1];
ele--;
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//27.)WAP in C to delete odd elements from array .
//     i/p: int a[6]={11,12,14,13,15,18};
//     o/p: int a[6]={12,14,18};
#include<stdio.h>
int main()
{
int a[6]={11,12,14,13,15,18},ele,i,j;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
if(a[i]%2!=0)
{
for(j=i;j<ele-1;j++)
{
a[j]=a[j+1];
}
ele--;
i--;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//28.)WAP in C to delete -ve elements from array .
//        i/p: int a[6]={-11,12,-14,13,-15,-18};
//        o/p: int a[6]={12, 13}
#include<stdio.h>
int main()
{
int a[6]={-11,12,-14,13,-15,-18},ele,i,j;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
if(a[i]<0)
{
for(j=i;j<ele-1;j++)
{
a[j]=a[j+1];
}
ele--;
i--;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//29.)WAP in C to delete duplicate elements from array .
//     i/p: a[10]={3,3,2,4,4,1,2,3,7,9}
//     o/p: a[10]={3,2,4,1,7,9};
#include<stdio.h>
int main()
{
int a[10]={3,3,2,4,4,1,2,3,7,9},ele,i,j,k;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
for(j=i+1;j<ele;j++)
{
if(a[i]==a[j])
{
for(k=j;k<ele;k++)
a[k]=a[k+1];
ele--;
j--;
}
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//30.)WAP in C to delete even duplicate ele from array.
//     i/p: a[10]={3,3,2,4,4,2,5,3,4,9}
//     o/p: a[10]={3,3,2,4,5,3,9}
#include<stdio.h>
int main()
{
int a[10]={3,3,2,4,4,2,5,3,4,9},ele,i,j,k;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
for(j=i+1;j<ele;j++)
{
if(a[i]==a[j])
{
if(a[i]%2==0)
{
for(k=j;k<ele;k++)
a[k]=a[k+1];
ele--;
j--;
}
}
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//31.)WAP in C to count all duplicate elements from array.
//        i/p: a[10]={3,3,2,4,4,2,5,3,4,9}
//        o/p: 3 ->3 times ,2-> 2 times , 4-> 3 times
#include<stdio.h>
int main()
{
int a[10]={3,3,2,4,4,2,5,3,4,9};
int ele,i,count_2=0,count_3=0,count_4=0,count_5=0,count_9=0;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
if(a[i]==3)
count_3++;
else if(a[i]==2)
count_2++;
else if(a[i]==4)
count_4++;
else if(a[i]==5)
count_5++;
else if(a[i]==9)
count_9++;
}
printf("count_2=%d count_3=%d count_4=%d count_5=%d count_9=%d",count_2,count_3,count_4,count_5,count_9);
}
//Another method
#include<stdio.h>
int main()
{
int a[10]={3,3,2,4,4,2,5,3,4,9};
int ele,i,j,c;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
for(j=0;j<ele;j++)
if(a[i]==a[j])
break;
if(j!=i)
continue;
c=1;
for(j=j+1;j<ele;j++)
if(a[i]==a[j])
c++;
if(c>1)
printf("%d->%dtyms\n",a[i],c);
}
}
//32.)WAP in C to product of digit of all array elements.
//         i/p: int a[5]={11,202,234,456,90};
//         o/p: int a[5]={1, 0, 24, 120, 0}
#include<stdio.h>
int main()
{
int a[5]={11,202,234,456,90};
int ele,i,temp,r,r1;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
temp=a[i];
for(temp,r1=1;temp>0;temp/=10)
{
r=temp%10;
r1=r1*r;
a[i]=r1;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//33.)WAP in C to store factorial of array in another array.
//          i/p: int a[4]={ 4, 5, 6, 4};
//          o/p: int b[4]={24,120,720,24}
#include<stdio.h>
int main()
{
int a[4]={4,5,6,4};
int ele,i,j,temp,factorial;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
temp=a[i];
for(j=1,factorial=1;j<=temp;j++)
{
factorial=factorial*j;
a[i]=factorial;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//34.)WAP in C to print and count prime in array .
//        i/p: int a[7]={3,4,5,6,7,8,9};
//        o/p: 3 5 7 , count= 3
#include<stdio.h>
int main()
{
int a[7]={3,4,5,6,7,8,9};
int ele,i,j,count=0;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
for(j=2;j<a[i];j++)
if(a[i]%j==0)
break;
if(a[i]==j)
{
printf("%d ",a[i]);
count++;
}
}
printf("count=%d\n",count);
}
//35.)WAP in C to print and count perfect in array .
//       i/p: int a[7]={3,4,5,6,7,28,9};
//       o/p: 6 28 , count= 2
#include<stdio.h>
int main()
{
int a[7]={3,4,5,6,7,28,9};
int ele,i,count=0,j,sum;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
sum=0;
for(j=1;j<a[i];j++)
{
if(a[i]%j==0)
sum+=j;
}
if(sum==a[i])
{
printf("%d ",a[i]);
count++;
}
}
printf("count=%d\n",count);
}
//36.)WAP in C to print and count strong in array .
//       i/p: int a[7]={2,4,2,6,145,28,1};
//       o/p: 2 2 145 1 ,count= 4
#include<stdio.h>
int main()
{
int a[7]={2,4,2,6,145,28,1};
int ele,i,sum,fact,count=0,temp,j,digit;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
sum=0;
for(temp=a[i];temp>0;temp/=10)
{
digit=temp%10;
fact=1;
for(j=1;j<=digit;j++)
fact=fact*j;
sum+=fact;
}
if(sum==a[i])
{
printf("%d ",a[i]);
count++;
}
}
printf("count=%d\n",count);
}
//37.)WAP in C to print and count armstrong in array .
//         i/p: int a[7]={22,4,21,6,153,28,11};
//         o/p: 4 6 153 ,count= 3
#include<stdio.h>
int main()
{
int a[7]={22,4,21,6,153,28,11};
int ele,i,sum,count=0,c,temp,power,j,digit;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
sum=0;
c=0;
for(temp=a[i];temp;temp/=10)
c++;
for(temp=a[i];temp>0;temp/=10)
{
digit=temp%10;
for(j=0,power=1;j<c;j++)
power=power*digit;
sum+=power;
}
if(sum==a[i])
{
count++;
printf("%d ",a[i]);
}
}
printf("count=%d\n",count);
}
//38.)WAP in C to right rotate array 1 times in same array.
//        i/p: int a[7]={11,21,31,41,51,61,71};
//        o/p: int a[7]={71,11,21,31,41,51,61};
#include<stdio.h>
int main()
{
int a[7]={11,21,31,41,51,61,71};
int ele,temp,i;
ele=sizeof(a)/sizeof(a[0]);
printf("Before swapping\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
temp=a[ele-1];
for(i=ele-1;i>0;i--)
a[i]=a[i-1];
a[0]=temp;
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//39.)WAP in C to right rotate array 3 times in same array.
//         i/p: int a[7]={11,21,31,41,51,61,71};
//         o/p: int a[7]={51,61,71,11,21,31,41};
#include<stdio.h>
int main()
{
int a[7]={11,21,31,41,51,61,71};
int ele,temp,i,ro,j;
printf("how many times rotate\n");
scanf("%d",&ro);
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ro;i++)
{
temp=a[ele-1];
for(j=ele-1;j>0;j--)
a[j]=a[j-1];
a[0]=temp;
}
printf("After swapping\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//40.)WAP in C to left rotate array 1 times in same array.
//        i/p: int a[7]={11,21,31,41,51,61,71};
//        o/p: int a[7]={21,31,41,51,61,71,11};
#include<stdio.h>
int main()
{
int a[7]={11,21,31,41,51,61,71};
int ele,i,j,temp;
ele=sizeof(a)/sizeof(a[0]);
temp=a[0];
for(i=0;i<ele-1;i++)
a[i]=a[i+1];
a[ele-1]=temp;
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//41.)WAP in C to left rotate array 2 times in same array.
//    i/p: int a[7]={11,21,31,41,51,61,71};
//    o/p: int a[7]={31,41,51,61,71,11,21}
#include<stdio.h>
int main()
{
int a[7]={11,21,31,41,51,61,71};
int ele,ro,temp,i,j;
ele=sizeof(a)/sizeof(a[0]);
printf("How many times rotate\n");
scanf("%d",&ro);
for(i=0;i<ro;i++)
{
temp=a[0];
for(j=0;j<ele-1;j++)
a[j]=a[j+1];
a[ele-1]=temp;
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//42.)WAP in C to shift all -ve elements to right side in same array.
//           i/p: int a[7]={-1,22,3,-4,-8,33,77};
//           o/p: int a[7]={22,3,33,77,-1,-4,-8,};
#include<stdio.h>
int main()
{
int a[7]={-1,22,3,-4,-8,33,77};
int ele,temp,i,j;
ele=sizeof(a)/sizeof(a[0]);
int lim=ele;
for(i=0;i<ele;i++)
{
if(a[i]<0)
{
temp=a[i];
for(j=i;j<ele-1;j++)
a[j]=a[j+1];
a[ele-1]=temp;
i--;
ele--;
}
}
for(i=0;i<lim;i++)
printf("%d ",a[i]);
printf("\n");
}
//43.)WAP in C to shift all odd elements to right side in same array.
//           i/p: int a[7]={11,22,22,44,55,33,88};
//           o/p: int a[7]={22,22,44,88,11,55,33};
#include<stdio.h>
int main()
{
int a[7]={11,22,22,44,55,33,88};
int ele,temp,i,j;
ele=sizeof(a)/sizeof(a[0]);
int lim=ele;
for(i=0;i<ele;i++)
{
if(a[i]%2!=0)
{
temp=a[i];
for(j=i;j<ele-1;j++)
a[j]=a[j+1];
a[ele-1]=temp;
i--;
ele--;
}
}
for(i=0;i<lim;i++)
printf("%d ",a[i]);
printf("\n");
}
//44.)44.WAP in C to shift all 0 to left side in same array.
//         i/p: int a[7]={11,0,0,44,0,33,0};
//         o/p: int a[7]={0,0,0,0,11,44,33};
#include<stdio.h>
int main()
{
int a[7]={11,0,0,44,0,33,0};
int ele,temp[0],i,j;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
if(a[i]==0)
temp[j++]=a[i];
}
for(i=0;i<ele;i++)
{
if(a[i]!=0)
temp[j++]=a[i];
}
for(i=0;i<ele;i++)
printf("%d ",temp[i]);
printf("\n");
}
//45.)WAP in C to print 1st perfect and pos form array .
//         i/p: int a[5]={2,4,6,28,6};
//         o/p: num= 6, pos= 2
#include<stdio.h>
int main()
{
int a[5]={2,4,6,28,6};
int ele,i,j,sum;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
sum=0;
for(j=1;j<a[i];j++)
{
if(a[i]%j==0)
sum+=j;
}
if(sum==a[i])
{
printf("num=%d pos=%d\n",a[i],i);
break;
}
}
}
//46.)WAP in C to store 1st 7 prime number in array .
//         i/p: int a[7];
//         o/p: int a[7]={2,3,5,7,11,13,17};
#include<stdio.h>
int main()
{
int a[7],i,j,ele;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;)
{
scanf("%d",&a[i]);
for(j=2;j<a[i];j++)
if(a[i]%j==0)
break;
if(a[i]==j)
i++;
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//47.)WAP in C to delete perfect number from array .
//          i/p: int a[7]={6,6,7,28,6,5,24};
//          o/p: int a[7]={7,5,24};
#include<stdio.h>
int main()
{
int a[7]={6,6,7,28,6,5,24};
int ele,i,j,k,sum;
ele=sizeof(a)/sizeof(a[0]);
for(i=0,k=0;i<ele;i++)
{
sum=0;
for(j=1;j<a[i];j++)
if(a[i]%j==0)
sum+=j;
if(sum==a[i])
{
for(k=i;k<ele;k++)
a[k]=a[k+1];
i--;
ele--;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//48.)WAP in C to replace prime index ele with 0 in array.
//        i/p: int a[8]={11,22,33,44,55,66,77,88};
//        o/p: int a[8]={11,22,0 ,0 ,55,0 ,77,0 };
#include<stdio.h>
int main()
{
int a[8]={11,22,33,44,55,66,77,88};
int i,j,ele;
ele=sizeof(a)/sizeof(a[1]);
for(i=0;i<ele;i++)
{
for(j=2;j<i;j++)
if(i%j==0)
break;
if(i==j)
{
a[i]=0;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//49.)WAP in C to store prime index ele in another array.
//i/p: int a[8]={11,22,33,44,55,66,77,88};
//o/p: int b[8]={33,44,66,88};
#include<stdio.h>
int main()
{
int a[8]={11,22,33,44,55,66,77,88};
int i,j,b[8],k=0;
int ele=sizeof(a)/sizeof(a[0]);
for(i=2;i<ele;i++)
{
for(j=2;j<i;j++)
if(i%j==0)
{
break;
}
if(i==j){
b[k++]=a[i];
}
}
for(i=0;i<k;i++)
printf("%d ",b[i]);
printf("\n");
}
//50.)WAP in C to delete all strong num from array .
//       i/p: int a[6]={2,145,2,14,3,2};
//       o/p: int a[6]={14,3};
#include<stdio.h>
int main()
{
int a[6]={2,145,2,14,3,2};
int i,j,sum,fact,ele,temp,dig,k;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++){
sum=0;
for(temp=a[i];temp;temp/=10)
{
dig=temp%10;
fact=1;
for(j=1;j<=dig;j++)
fact=fact*j;
sum=sum+fact;
}
if(sum==a[i])
{
for(k=i;k<ele-1;k++)
a[k]=a[k+1];
i--;
ele--;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
//51.)WAP in C to delete odd palindrome number from array .
//        i/p: int a[6]={22,141,222,45,33,77};
//        o/p: int a[6]={22,222,45};
#include<stdio.h>
int main()
{
int arr[6]={22,141,222,45,33,77};
int i,j,rev,dig,temp,ele;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
rev=0;
for(temp=a[i];temp;temp/=10)
{
dig=temp%10;
rev=rev*10+dig;
}
if(rev==a[i]&&a[i]%2!=0)
{
for(j=i;j<ele-1;j++)
a[j]=a[j+1];
i--;
ele--;
}
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}


