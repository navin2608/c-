#include <iostream>
#include <string.h>
using namespace std;
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

void substring(char s[], char sub[], int p, int len){
 int c = 0;
 while (c < len) {
 sub[c] = s[p+c];
  c++;
}
 sub[c] = '\0';
}


int lcp(char s[], char t[],char a[]){
 int n = MIN(strlen(s),strlen(t));
for(int i = 0; i < n; i++){
  if(s[i] != t[i]){
   substring(s,a,0,i);
    return 0;
 }
}
substring(s,a,0,n);
return 0;
}

int main()
{
//    cout<<"enter a string : ";
//    string s1;
//    getline(cin,s1);
//    char str[s1.size()+1];
//    strcpy(str,s1.c_str());
//    //cout<<s1<<str;
  char str[] = "helloredhellogreenhelloyellow";
char lrs[30], x[30], res[30], sub[30],sub1[30];
int i,j,n = strlen(str);
for(i = 0; i < n; i++){
 for(j = i+1; j < n; j++){

   substring(str,sub,i,n);
        substring(str,sub1,j,n);
   lcp(sub,sub1,x);

    if(strlen(x) > strlen(lrs)) strncpy(lrs, x, strlen(x));
 }
}
cout<<"Longest repeating sequence:"<<lrs;
  return 0;
}
