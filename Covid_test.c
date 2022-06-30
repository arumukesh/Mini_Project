#include<stdio.h>
FILE *cp[100];
FILE *cn[100];
struct data
{ int a;
float t;
}k[100];
void co(struct data e[],int *s);
int main()
{ int i,n;
 printf("Enter the Total no. of Patient:-\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { printf("Patient %d Age: ",i+1);
 scanf("%d",&k[i].a);
 printf("Patient %d Temperature(in°F): ",i+1);
 scanf("%f",&k[i].t);
 printf("\n");
 }
 co(k,&n);
 return 0;
}
void co(struct data e[],int *s)
{ int i;
 printf("Covid Results:-\n");
 for(i=0;i<*s;i++)
 { if((e[i].a>=18) && (e[i].t>=102.2))
    {cp[i]=fopen("positive.txt","w");
     printf("Patient %d is tested +ve\n",i+1);
     fprintf(cp[i],"Patient %d is tested +ve\n",i+1);}
 else if((e[i].a<18) && (e[i].t>=100.4))
    {cp[i]=fopen("positive.txt","w");
     printf("Patient %d is tested +ve\n",i+1);
     fprintf(cp[i],"Patient %d is tested +ve\n",i+1);
     fclose(cp[i]);
    }
 else 
    {cn[i]=fopen("negative.txt","w");
     printf("Patient %d is tested -ve\n",i+1);
     fprintf(cn[i],"Patient %d is tested -ve\n",i+1);
     fclose(cn[i]);
    }
 
  }
 
}