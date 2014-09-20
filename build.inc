. /etc/rc.conf
[ -z "${cbsd_workdir}" ] && err 1 "No cbsd_workdir in rc.conf"
workdir=${cbsd_workdir}
. ${workdir}/nc.inventory
[ -n "${STABLE}" ] && stable="${STABLE}"
. ${workdir}/build.subr
. ${workdir}/universe.subr

init_target_arch
