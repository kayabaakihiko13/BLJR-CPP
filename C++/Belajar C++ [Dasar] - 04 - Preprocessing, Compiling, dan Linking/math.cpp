int power(int a,int b){
    int result=1;
    for (int i=0;i<b;i++){
        result*=a;
    }
    return result;
}
int kali(int a,int b){
    int result=0;
    for(int i=0;i<b;i++){
        result+=a;
    }
    return result;
}

int bagi(int a,int b){
    int index=0;
    for (int i=0;i<b;i++){
        a-=b;
        index+=1;
    }
    return index+=1;
}

