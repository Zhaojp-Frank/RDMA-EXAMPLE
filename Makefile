#rdma-t: rdma-t.c 
#	cc rdma-t.c -o rdma-t -g -libverbs
tensor: tensor-rdma-thr.c 
	cc tensor-rdma-thr.c -o tensor -g -libverbs -lpthread
clean:
	rm -rf ./*.o ./tensor
