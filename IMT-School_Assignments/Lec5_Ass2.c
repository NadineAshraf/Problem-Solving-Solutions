#include <stdio.h>
void main(void)
{int class1[10],class2[10],class3[10];
	int passed=0,failed=0,max,min,sum=0;
	for(int i=0;i<=2;i++) //loop for classes
	{ for(int j=0;j<10;j++) //loop for students
		{ printf("Enter the grade of student no %d in class no %d ",j+1,i+1);
			if(i==0)
			scanf("%d", &class1[j]);
			if(i==1)
			scanf("%d", &class2[j]);
			else if(i==2)
			scanf("%d", &class3[j]);
		}		
	}

	
   	for(int i=0;i<=2;i++) //loop for classes
	{ for(int j=0;j<10;j++) //loop for students
		{ if (i==0)
			{if(class1[j]>=50)
				{passed++;
				sum+=passed;}
							
			 else if (class1[j]<50)
			 { failed++;
				 sum+=failed;
			 }
			 if(class1[j]>max)
			 max=class1[j];
			 else if (class1[j]<min)
			  min=class1[j];
			}			 
			else if (i==1)
			{if(class2[j]>=50)
				{passed++;
				sum+=passed;}
			 else if (class1[j]<50)
			 { failed++;
				 sum+=failed;
			 }
			  if(class2[j]>max)
			 max=class2[j];
			 else if (class2[j]<min)
			  min=class2[j];
			}						 
			 else if (i==2)
			 {if(class2[j]>=50)
				{passed++;
				sum+=passed;}
			 else if (class1[j]<50)
			 { failed++;
				 sum+=failed;
			 }
			  if(class3[j]>max)
			 max=class3[j];
			 else if (class3[j]<min)
			  min=class3[j];
			 }	  
	}	

} 
printf("No. of passed students = %d and No. of failed students = %d\n ",passed,failed);
printf("Highest grade is %d\n",max);
printf("Lowest grade is %d\n",min);
printf("Average = %d",sum/30);

 }  	   