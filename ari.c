#include <math.h>
#include <ctype.>
string ari(string);

string ari(string a)
{
 
 int w=0,s=0,c=0;
 for(int i=0;i<strlen(a);i++)
    {   
   if(isalnum(a[i]))
     c++;
    
   if(a[i]==' ')
    w++;
   else if(a[i]=='.' || a[i]=='?')
    s++;
    else if(a[i]=='!')
    s++;
    }
 
 float sum = (4.71*(float)(c)/w)+(0.5*((float)(w)/s))-21.43;


     int b = (int)(sum);
     if(sum/(float)(b)>1)
     b++;
     
   switch(b){

     case  1: return"Kindergarten";
     case  2:return "First/Second Grade";
     case  3: return "Third Grade";
     case  4: return "Fourth Grade";
     case  5: return " Fifth Grade";
     case  6: return "Sixth Grade";
     case  7: return "Seventh Grade";
     case  8: return "Eighth Grade";
     case  9: return "Ninth Grade";
     case  10: return "Tenth Grade";
     case  11: return "Eleventh Grade";
     case  12: return "Twelfth grade";
     case  13: return "College student";
     case  14: return "Professor";
     }
   

}
