FROM dkorolevtesthellocpp/ubuntu_with_gcc

ADD run.sh /run.sh
RUN chmod +x /run.sh

COPY test.cc /
ENTRYPOINT ["/run.sh"]
