#include "Thread.h"

THREAD *all_threads = NULL;
pthread_key_t self_key;

static int getNextTid();

THREAD *createThread(void *target, void *argp){


}

THREAD *currentThread(void){
    //从TLS中获取当前Thread指针
    return (THREAD *)pthread_getspecific(self_key);
}

void *runThread(THREAD *thread){
    if(currentThread()->tid == NULL){
        //执行run方法时不为当前线程本身，则执行
        pthread_t tid;
        pthread_create(&tid,NULL,thread->target,thread->argp);
        thread->tid = &tid;
        //将thread存储至TLS，currentThread时获取
        pthread_setspecific(self_key,thread);
        
    }
}

void parkThread(THREAD *thread){

}

int isInterrupted(THREAD *thread, enum clear_interrupted flag){

    return 0;
}

void interruptThread(THREAD *thread){
    
}