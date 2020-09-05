FROM ubuntu:latest

RUN apt-get update -y
RUN apt-get install -y g++

ADD run.sh /run.sh
ADD test.cc /test.cc

RUN chmod +x /run.sh
ENTRYPOINT ["/run.sh"]
