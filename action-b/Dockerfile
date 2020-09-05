FROM ubuntu-latest

RUN apt-get update
RUN apt-get install g++

ADD run.sh /run.sh
RUN chmod +x /run.sh
ENTRYPOINT ["/run.sh"]
