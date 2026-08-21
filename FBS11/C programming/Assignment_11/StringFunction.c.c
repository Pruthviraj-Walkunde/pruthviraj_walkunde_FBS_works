#include<stdio.h>
#include<string.h>
int mystrlen(char*);
void mystrcpy(char*,char*);
void mystrncpy(char*,char*,int);
void mystrcat(char*,char*);
void mystrncat(char*,char*,int);
int mystrcmp(char*,char*);
int mystrncmp(char*,char*,int);
char* mystrchr(char*,char);
char* mystrrchr(char*,char);
//char*mystrstr(char*,char*);//
int mytoupper(int);
int mytolower(int);
void mystrupper(char*);
void mystrlower(char*);
void mystrrev(char*);
char* mystrstr(char*,char*);
int mystrcasecmp(char*,char*);
int mystrncasecmp(char *s1,char *s2,int n);
int main(){
	char a[]="j";
	char b[]="jJh";
	printf("%s\n",b);
	//mystrrev(b);
	int i=mystrncasecmp(a,b,2);
	printf(" %d\n",i);
//	mystrupper(b);
//	printf("%s",b);
//	mystrlower(b);
//	printf("\n%s",b);	
	return 0;
}
int mystrlen(char*arr){
	int i=0;
	while(arr[i]!='\0')
	{
		i++;
	//	printf("%d",arr[i]);
	}
			return i;
}
void mystrcpy(char*dist,char*sour){
	int i=0;
	while(sour[i]!='\0'){
		dist[i]=sour[i];
		i++;
		
	}
	dist[i]='\0';
}
void mystrncpy(char*dist,char*sour,int n){
	int i;
	for(i=0;i<n&&sour[i]!='\0';i++){
		dist[i]=sour[i];
	}
	dist[i]='\0';
}
void mystrcat(char*dist,char*sour){
	int i=0,j;
	j=mystrlen(dist);
	while(sour[i]!='\0'){
		dist[j]=sour[i];
		j++;
		i++;
}
	dist[j]='\0';
}
void mystrncat(char*dist,char*sour,int n){
	int i=0,j;
	j=mystrlen(dist);
	while(i<n&&sour[i]!='\0'){
	
		dist[j]=sour[i];
		j++;
		i++;

			
	}
	dist[j]='\0';
}
int mystrcmp(char*a,char*b){
	int j=mystrlen(a),k=mystrlen(b);
	if(j!=k){
		return 1;
	}
	else{
		for(int i=0;i<j;i++){
			if(a[i]!=b[i])
				return 1;
		}
		return 0;
	}
}
int mystrncmp(char*a,char*b,int n){
	int j=mystrlen(a),k=mystrlen(b),i=0;
	if(n<=j&&n<=k){
	while(i<n){
		if(a[i]!=b[i]){
			return 1;
		}
		else{
			i++;
		}
	}
	return 0;
}
return 1;
}
char* mystrchr(char*a,char ch){
	int i=mystrlen(a),j=0;
	while(j<i){
		if(a[j]==ch){
			return &a[j];
		}
		j++;
	}
	return 0;
}
char* mystrrchr(char*a,char ch){
	int i=mystrlen(a)-1,j=0;
	while(j<=i){
		if(a[i]==ch){
			return &a[i];
		}
		i--;
	}
	return 0;
}

int mytoupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 'a' + 'A';
    }

    return ch;
}
void mystrupper(char*arr){
	int i=0;
	while(arr[i]!='\0'){
		arr[i]=mytoupper(arr[i]);
		i++;
	}
}
int mytolower(int ch){
	if(ch>='A'&&ch<='Z'){
		return ch-'A'+'a';
	}
	return ch;
}
void mystrlower(char*arr){
	int i=0;
	while(arr[i]!='\0'){
		arr[i]=mytolower(arr[i]);
		i++;
	}
}
void mystrrev(char*arr){
	int j=strlen(arr)-1,i=0;
	char temp;
	while(j>i){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
		i++;
	}
}
char *mystrstr(char *str, char *sub)
{
    int i,j;

    for(i=0;str[i]!='\0';i++)
    {
        j=0;

        while(str[i+j]==sub[j]&&sub[j]!='\0')
        {
            j++;
            printf("hello\n");
        }

        if(sub[j]=='\0')
            return &str[i];
    }

    return NULL;
}
int mystrcasecmp(char *s1, char *s2)
{
    int i=0;

    while(s1[i]!='\0'&&s2[i]!='\0')
    {
        char c1 = mytolower(s1[i]);
        char c2 = mytolower(s2[i]);

        if (c1 != c2)
            return c1 - c2;

        i++;
    }

    return mytolower(s1[i]) - mytolower(s2[i]);
}
int mystrncasecmp(char *s1, char *s2, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        char c1 = mytolower(s1[i]);
        char c2 = mytolower(s2[i]);

        if(c1 != c2)
            return c1 - c2;

        if(s1[i] == '\0' || s2[i] == '\0')
            break;
    }

    return 0;
}



