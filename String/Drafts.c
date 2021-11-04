int str_compare(char str1[], char str2[]){
    int i,j;
    for(i=0; str1[i] !='\0',str2[i] !='\0'; i++){
        if(str1[i]>str1[j]){
            return 1;
        }
        if(str1[i]<str2[i]){
            return -1;
        }
        if(str1[i]== str2[i]){
            return 0;
        }
    }

}




