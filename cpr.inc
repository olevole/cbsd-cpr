# custom defines
#
arch=`uname -m`

# pkg create docroot
_DOCROOT="/usr/home/web/jb1.olevole.ru/dl.bsdstore.ru/releases"
[ ! -d "${_DOCROOT}" ] && mkdir -p ${_DOCROOT}

_IMGDOCROOT="/usr/home/web/jb1.olevole.ru/dl.bsdstore.ru/img"
[ ! -d "${_IMGDOCROOT}" ] && mkdir -p ${_IMGDOCROOT}

# base create docroot
_DOCROOTBASE="/usr/home/web/jb1.olevole.ru/dl.bsdstore.ru/releases"
[ ! -d "${_DOCROOTBASE}" ] && mkdir -p ${_DOCROOTBASE}

# base create docroot
_IMGDOCROOTBASE="/usr/home/web/jb1.olevole.ru/dl.bsdstore.ru/img"
[ ! -d "${_IMGDOCROOTBASE}" ] && mkdir -p ${_IMGDOCROOTBASE}

# pkg cpr docroot
_DOCROOTPKGBASE="/usr/home/web/jb1.olevole.ru/dl.bsdstore.ru/freebsd"
[ ! -d "${_DOCROOTPKGBASE}" ] && mkdir -p ${_DOCROOTPKGBASE}

# default is nox repository
_MASTERLINK="nox"
_SLAVELINK=""

# default is continue mode
_NEW="0"

_REPOVERION="${_MASTERLINK}"

# pause by default
_PAUSE="1"

# hosts for populate
_HST="hst1 hst2"
