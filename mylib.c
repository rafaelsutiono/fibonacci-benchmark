int fI(int N){
    int n1=0;
    int n2=1;
    int out;

    if (N==0) {
        return n1;
    } else if (N==1){
        return n2;
    } else {
        for (int i = 2; i<= N; i++){ 
            out = n1+n2;
            n1 = n2;
            n2 = out;
        }
        return out;
    }
}

int fR (int N){
    if (N==0){
        return 0;
    } else if (N==1){
        return 1;
    } else {
        return fR(N - 1) + fR(N-2);
    }
}