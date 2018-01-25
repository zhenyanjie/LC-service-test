主要工作：

重现BE_workload 对LC_service 的影响

LC_service：
silo 来自论文  [TailBench: A Benchmark Suite and Evaluation Methodology for Latency-Critical Applications](http://tailbench.csail.mit.edu)

BE_workload: 对一个固定大小的数组不断进行读写，造成大量cache-miss

实验环境：cache ：3M

实验结果：(前面标注的是干扰程序数组所占内存)

结果显示，干扰越大，latency越小，不正常！

**12MB**   
95th percentile latency 0.399 ms | max latency 2.077 ms

​95th percentile latency 0.409 ms | max latency 1.914 m

95th percentile latency 0.418 ms | max latency 1.744 ms



**6MB**     

95th percentile latency 0.429 ms | max latency 1.996 ms

​95th percentile latency 0.446 ms | max latency 2.135 ms

**3MB**     

95th percentile latency 0.505 ms | max latency 2.283 ms

95th percentile latency 0.488 ms | max latency 2.790 ms

95th percentile latency 0.485 ms | max latency 2.324 ms

**1MB** 
    
95th percentile latency 0.666 ms | max latency 1.931 ms

​95th percentile latency 0.693 ms | max latency 2.734 ms

**无干扰**  
95th percentile latency 0.838 ms | max latency 2.998 ms

95th percentile latency 0.920 ms | max latency 3.500 ms

95th percentile latency 0.881 ms | max latency 3.746 ms

95th percentile latency 0.856 ms | max latency 2.457 ms

