rdma-t: rdma-t.c 
	cc rdma-t.c -o rdma-t -g -libverbs
clean:
	rm -rf ./*.o ./rdma-t
