ldapsearch -Q -LLL "(uid=z*)" cn | grep '^cn:' | cut -d ':' -f2 | sort -r -f | cut -c2-
