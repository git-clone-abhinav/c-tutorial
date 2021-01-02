 #include<stdio.h>
 
 int main(){
    float marks=0;
    float total=0;
    float percentage;
    printf("\tEnter Your Marks :  ");
    scanf("%f", &marks);
    printf("\tEnter Total Marks : ");
    scanf("%f", &total);
    percentage = (marks/total)*100;
    printf("\tYour percentage is ");
    printf("%f\n",percentage);
    if(percentage>=90){
        printf("\tGrade : A, Well Done");
    }
    else if(percentage>=80 && percentage<90){
        printf("\tGrade : B, Nice Play");
        }
    else if(percentage>=70 && percentage<80){
        printf("\tGrade : C,Good but can do better");
    }
    else if(percentage>=60 && percentage<70){
        printf("\tGrade : D,Improvemnt needed");
    }
}