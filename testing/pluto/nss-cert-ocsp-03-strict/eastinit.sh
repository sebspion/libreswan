/testing/guestbin/swan-prep --x509
certutil  -d sql:/etc/ipsec.d -D -n west
ipsec setup start
/testing/pluto/bin/wait-until-pluto-started
ipsec auto --add nss-cert-ocsp
ipsec auto --status |grep nss-cert-ocsp
echo "initdone"
