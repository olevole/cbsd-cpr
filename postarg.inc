# custom defines
#

[ -z "${target_arch}" ] && target_arch="${arch}"

FHIER="${arch}/${target_arch}"

# pkg create docroot
_MYDOCROOT="${_DOCROOTBASE}/${FHIER}"

# pkg create docroot
_IMGMYDOCROOT="${_IMGDOCROOTBASE}/${FHIER}/${_VER}"

# remote docroot
_REMOTEDOCROOT="/usr/home/web/dl.bsdstore.ru"
