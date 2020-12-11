#define TASK_LENGHT 5
#define TRUE 1
#define FALSE 0

static char number_task = 0;


typedef void (*function)();

struct taskFunc {
   unsigned char sec; 
   unsigned char count_sec;
   unsigned char active:1;
   function func_time;
};
typedef struct taskFunc taskFunc;

struct taskFunc *taskList[TASK_LENGHT];


void addTask (struct taskFunc *tk) {

   taskList[number_task] = tk;
   number_task++;
}

 
static void runTk (struct taskFunc *tk) {
   function func = tk->func_time; 

   if (tk->count_sec == tk->sec) {
      tk->count_sec = 0;
      func ();
   }
   else {
      tk->count_sec++;
   }
}

void runTasks () {
   unsigned char task_ct = 0;

   for (task_ct = 0; task_ct < number_task; task_ct++) {
       
      if (taskList[task_ct]->active == FALSE) {
         continue;
      }

      runTk (taskList[task_ct]);
   }
}
