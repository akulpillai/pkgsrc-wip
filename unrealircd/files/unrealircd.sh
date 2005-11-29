#!@RCD_SCRIPTS_SHELL@
#
# $NetBSD: unrealircd.sh,v 1.5 2005/11/29 18:40:53 adrian_p Exp $
#
# PROVIDE: unrealircd
# REQUIRE: DAEMON
# KEYWORD: shutdown
#

if [ -f /etc/rc.subr ]
then
	. /etc/rc.subr
fi

name="unrealircd"
rcvar=${name}
command="@PREFIX@/sbin/ircd"
required_files="@UIRCD_HOME@/unrealircd.conf"
unrealircd_user="@UIRCD_USER@"
unrealircd_group="@UIRCD_GROUP@"

load_rc_config $name
run_rc_command "$1"
