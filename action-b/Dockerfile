FROM ubuntu:latest

RUN apt-get update -y
RUN apt-get install -y clang++

ADD run.sh /run.sh

RUN chmod +x /run.sh
ENTRYPOINT ["/run.sh"]
