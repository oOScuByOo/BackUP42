ldapsearch -Q -LLL "sn=*bon*" sn | grep sn | wc -l | sed 's/ //g'
