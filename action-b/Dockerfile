FROM debian:9.5-slim

RUN sudo apt install build-essential
RUN sudo apt install g++

ADD run.sh /run.sh
RUN chmod +x /run.sh
ENTRYPOINT ["/run.sh"]
