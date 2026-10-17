#include <string.h>
#include <stdio.h>


struct Task {
    char description[100];
    int completed;
}; 
    


int main(){
     int choice =0;
     struct Task tasks[100];
     int taskCount = 0 ; 
     int deleteindex ;
     int deletechoice;

while(choice !=4){
    printf("===== TODO APP =====\n");
    printf("1.Add tasks\n");
    printf("2.View tasks\n");
    printf("3.Delete tasks\n");
    printf("4.Exit\n");
    printf("choose an option :");
    scanf("%d",&choice);
    getchar();



switch (choice){
    case 1 :if (taskCount < 100) {
        
    printf("Adding a task ");
    fgets(tasks[taskCount].description,100,stdin);
    tasks[taskCount].completed = 0;
    taskCount++;
    break;
    
} else {
   printf("the user list is full");
   break;
}

    case 2 :
    printf("Viewing tasks ...\n");
    for(int i =0 ; i<taskCount; i++){
    printf("%d. %s\n",i + 1, tasks[i].description);
    }
    break;
    case 3 :
    if(taskCount ==0){
        printf("there is no tasks to delete\n ");
    break;
    }
    

     
     printf("Which task do you want to delete? ");
    scanf("%d", &deletechoice);
    
    

if (deletechoice>taskCount || deletechoice<1 ){ 

printf("invalid task.\n");

    break;
}


    deleteindex = deletechoice - 1;
    for(int i = deleteindex;i<taskCount-1; i++) {
        tasks[i]=tasks[i+1];
    }

    taskCount --;
     printf("Deleting tasks\n");
    
    break;
    case 4: 
    printf("Exit\n");
    break;
    
    default:
    printf("Invalid option\n");
    break;


}

}



    return 0;
}