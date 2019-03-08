#
# Regular cron jobs for the editeuruniversel package
#
0 4	* * *	root	[ -x /usr/bin/editeuruniversel_maintenance ] && /usr/bin/editeuruniversel_maintenance
