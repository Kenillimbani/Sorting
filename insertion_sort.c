#include<stdio.h>
#include<string.h>
struct sorting
{
	char name[10];
	int rollno;
	int cgpa;	
}student[5];

char a[5][10];int b[5];

void sort();
void roll_bubble_sort();
void name_bubble_sort();
void cgpa_bubble_sort();


main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter Name Roll_no & Cgpa : ");
		scanf("%s%d%d",student[i].name,&student[i].rollno,&student[i].cgpa);
	}
	
	for(i=0;i<5;i++)
	{
	strcpy(a[i],student[i].name);
	b[i]=student[i].cgpa;
	}

	sort();
}

void sort()
{
	int i,j,c,r,flag=0;
	char t[10];
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
		if(strcmp(a[i],a[i+1])==0)
		flag=1;	
	}
	//printf("%d\n",flag);
	
	if(flag==0)
	name_bubble_sort();
	
	else
	{
		//sorting of cgpa...
		flag=0;
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(b[i],b[j]>0)
				{
					c=b[i];
					b[i]=b[j];
					b[j]=c;
				}
			}
		}
		
		for(i=0;i<4;i++)
		{
			if(b[i]==b[i+1])
			flag=1;	
		}
		
		if(flag==0)
		cgpa_bubble_sort();
		
		else
		roll_bubble_sort();
	}
	
}

void name_bubble_sort()
{
	int i,j,r,c,k;
	char t[10];
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
					if(strcmp(student[i].name,student[j].name)>0)
					{
						//name....
						strcpy(t,student[i].name);
						strcpy(student[i].name,student[j].name);
						strcpy(student[j].name,t);
						
						// roll no...
						
						r=student[i].rollno;
						student[i].rollno=student[j].rollno;
						student[j].rollno=r;
						
						//cgpa...
						
						c=student[i].cgpa;
						student[i].cgpa=student[j].cgpa;
						student[j].cgpa=c;
					}
					
				
		}
		
	}	
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Name Roll_no & Cgpa : ");
		printf("%s  %d  %d",student[i].name,student[i].rollno,student[i].cgpa);
	}

}

void cgpa_bubble_sort()
{
	int i,j,r,c,k;
	char t[10];
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{	
					if(student[i].cgpa > student[j].cgpa)
					{
						//name....
						
						strcpy(t,student[i].name);
						strcpy(student[i].name,student[j].name);
						strcpy(student[j].name,t);
						
						// roll no...
						
						r=student[i].rollno;
						student[i].rollno=student[j].rollno;
						student[j].rollno=r;
						
						//cgpa...
						
						c=student[i].cgpa;
						student[i].cgpa=student[j].cgpa;
						student[j].cgpa=c;
					}
					
				
		}
		
	}	
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Name Roll_no & Cgpa : ");
		printf("%s  %d  %d",student[i].name,student[i].rollno,student[i].cgpa);
	}

}

void roll_bubble_sort()
{
	int i,j,r,c,k;
	char t[10];
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{	
				
					if(student[i].rollno > student[j].rollno)
					{
						//name....
						strcpy(t,student[i].name);
						strcpy(student[i].name,student[j].name);
						strcpy(student[j].name,t);
						
						// roll no...
						
						r=student[i].rollno;
						student[i].rollno=student[j].rollno;
						student[j].rollno=r;
						
						//cgpa...
						
						c=student[i].cgpa;
						student[i].cgpa=student[j].cgpa;
						student[j].cgpa=c;
					}
					
				
		}
		
	}	
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Name Roll_no & Cgpa : ");
		printf("%s  %d  %d",student[i].name,student[i].rollno,student[i].cgpa);
	}

}



