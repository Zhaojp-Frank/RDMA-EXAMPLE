make

1. IB env
       server: ./rdma-t
       client: ./rdma-t <server-IP>
2. ROCE env:
       server: ./rdma-t -g 0
       client: ./rdma-t <server-IP> -g 0
