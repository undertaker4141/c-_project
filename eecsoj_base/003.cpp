#include<bits/stdc++.h>

using namespace std;

struct Time{
    int hour;
    int minute;
    char dector;
};
int main(){
    Time time;
    scanf("%d:%d%cM",&time.hour,&time.minute,&time.dector);
    //printf("%d:%d%cM\n",time.hour,time.minute,time.dector);
    bool canTest = false;
    if(time.dector == 'P'){
        canTest = false;
    }
    else{
        if(time.hour == 12){
            canTest = true;
        }
        else if(time.hour > 9){
            canTest = false;
        }
        else if(time.hour == 9){
            if(time.minute>45){
                canTest = false;
            }
            else{
                canTest = true;
            }
        }
        else{
            canTest = true;
        }
    }

    if(canTest){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}