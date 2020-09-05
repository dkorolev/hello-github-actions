FROM debian:9.5-slim

RUN apt install build-essential
RUN apt install g++

ADD run.sh /run.sh
RUN chmod +x /run.sh
ENTRYPOINT ["/run.sh"]
