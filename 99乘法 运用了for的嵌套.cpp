#include<stdio.h>
#include<string.h>
int main(){
 char *shia[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
 char *shib[10]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
 char *ge[11]={" ","one","two","three","four","five","six","seven","eight","nine"};
char str[1000]; 
int a;
 scanf("%d",&a);
if(a>0&&a<1000)
{sprintf(str,"%d",a);
int j=strlen(str);
 
 if(j==3&&(str[1]-'0')==0 && (str[2]-'0')==0 )
{printf("%s hundred",ge[str[0]-'0']);
 }
 else if(j==3&&(str[1]-'0')>1 && (str[2]-'0')!=0 )
{printf("%s hundred and %s-%s",ge[str[0]-'0'],shib[str[1]-'0'-2],ge[str[2]-'0']);
 }
 else if(j==3&&(str[1]-'0')==0 && (str[2]-'0')!=0 )
{printf("%s hundred and %s",ge[str[0]-'0'],ge[str[2]-'0']);
 }
  else if(j==3&&(str[1]-'0')==1  )
{printf("%s hundred and %s",ge[str[0]-'0'],shia[str[2]-'0']);
 }
 
 else if(j==3&&(str[2]-'0')==0&&(str[1]-'0')>1 )//
{printf("%s hundred and %s",ge[str[0]-'0'],shib[str[1]-'0'-2]);
 }
 else if(j==2&&(str[0]-'0')!=1&&(str[1]-'0')==0)
{printf("%s",shib[str[0]-'0'-2]);
 }
else if(j==2&&(str[0]-'0')!=1&&(str[1]-'0')!=0)
{printf("%s-",shib[str[0]-'0'-2]);
printf("%s",ge[str[1]-'0']);
 }
else if(j==2&&(str[0]-'0')==1)
{printf("%s",shia[str[1]-'0']);
 }
 
 else if(j==1){
  printf("%s",ge[(str[0]-'0')]);
  
}  
 }
else if(a==0)
{printf("zero");
}
else 
{printf("ERR");
}

 return 0;
}

