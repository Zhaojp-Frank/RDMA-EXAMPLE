#rdma-t: rdma-t.c 
#	cc rdma-t.c -o rdma-t -g -libverbs
tensor: tensor-rdma.c 
	cc tensor-rdma.c -o tensor -g -libverbs
clean:
	rm -rf ./*.o ./tensor
