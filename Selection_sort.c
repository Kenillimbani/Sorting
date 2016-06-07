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
void roll_selection_sort();
void name_selection_sort();
void cgpa_selection_sort();


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
	name_selection_sort();
	
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
		cgpa_selection_sort();
		
		else
		roll_selection_sort();
	}
	
}

void name_selection_sort()
{
	int l,i,j,r,c,flag=0;
	char t[10],k[10];
	for(i=0;i<4;i++)
	{
		strcpy(k,student[i].name);
		flag=0;
		for(j=i;j<5;j++)
		{
			if(strcmp(k,student[j].name) > 0)
			{
				strcpy(k,student[j].name);
	
				l=j;
				flag=1;
			}
			
		}
		
		if(flag==1)
		{
		
			//name....
						
			strcpy(t,student[i].name);
			strcpy(student[i].name,student[l].name);
			strcpy(student[l].name,t);
					
			// roll no...
						
			r=student[i].rollno;
			student[i].rollno=student[l].rollno;
			student[l].rollno=r;
						
			//cgpa...
						
			c=student[i].cgpa;
			student[i].cgpa=student[l].cgpa;
			student[l].cgpa=c;
			
		}
		
		
	}	
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Name Roll_no & Cgpa : ");
		printf("%s  %d  %d",student[i].name,student[i].rollno,student[i].cgpa);
	}

}

void cgpa_selection_sort()
{
	int l,i,j,r,c,k,flag=0;
	char t[10];
	for(i=0;i<4;i++)
	{
		k=student[i].cgpa;
		flag=0;
		for(j=i;j<5;j++)
		{
			if(k > student[j].cgpa)
			{
				k=student[j].cgpa;
	
				l=j;
				flag=1;
			}
			
		}
		
		if(flag==1)
		{
		
			//name....
						
			strcpy(t,student[i].name);
			strcpy(student[i].name,student[l].name);
			strcpy(student[l].name,t);
					
			// roll no...
						
			r=student[i].rollno;
			student[i].rollno=student[l].rollno;
			student[l].rollno=r;
						
			//cgpa...
						
			c=student[i].cgpa;
			student[i].cgpa=student[l].cgpa;
			student[l].cgpa=c;
			
		}
		
		
	}	
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Name Roll_no & Cgpa : ");
		printf("%s  %d  %d",student[i].name,student[i].rollno,student[i].cgpa);
	}

}


void roll_selection_sort()
{
	int i,l,j,r,c,k,flag=0;
	char t[10];
	for(i=0;i<4;i++)
	{
		k=student[i].rollno;
		flag=0;
		for(j=i;j<5;j++)
		{
			if(k > student[j].rollno)
			{
				k=student[j].rollno;
	
				l=j;
				flag=1;
			}
			
		}
		
		if(flag==1)
		{
		
			//name....
						
			strcpy(t,student[i].name);
			strcpy(student[i].name,student[l].name);
			strcpy(student[l].name,t);
					
			// roll no...
						
			r=student[i].rollno;
			student[i].rollno=student[l].rollno;
			student[l].rollno=r;
						
			//cgpa...
						
			c=student[i].cgpa;
			student[i].cgpa=student[l].cgpa;
			student[l].cgpa=c;
			
		}
		
		
	}	
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Name Roll_no & Cgpa : ");
		printf("%s  %d  %d",student[i].name,student[i].rollno,student[i].cgpa);
	}

}
