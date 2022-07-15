FROM i386/debian:stable-slim

RUN apt-get update
RUN apt-get install -y g++-mingw-w64-i686-win32
RUN apt-get install -y unzip tar wget 


WORKDIR /var/python

RUN wget -nv https://www.python.org/ftp/python/3.7.5/Python-3.7.5.tgz
RUN tar -xf Python-3.7.5.tgz
RUN wget -nv https://www.python.org/ftp/python/3.7.5/python-3.7.5-embed-win32.zip
RUN unzip -q python-3.7.5-embed-win32.zip -d python-embed

WORKDIR /var/sdk

CMD [ "./build.sh"]


