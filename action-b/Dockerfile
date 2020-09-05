FROM ubuntu:latest

COPY test.cc /

RUN apt-get update -y
RUN apt-get install -y g++

ADD run.sh /run.sh

RUN chmod +x /run.sh
ENTRYPOINT ["/run.sh"]
