参照JAVA的ReentrantLock，为C提供可重入的公平&非公平锁。
* 可重入公平锁&非公平锁的统一实现，屏蔽底层的线程对锁的操作，提供简单的加锁&释放锁方法。
* 提供线程级别的中断状态，线程可自行判断中断状态进行相应处理，而不需要注册进程的中断信号。
* 抽象线程模型，提供对线程简单的操作方法。
