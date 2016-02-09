
#define ALARM1 0
#define ALARM2 1
#define ALARM3 2
#define ALARM4 3
#define ALARM5 4
#define ALARM6 5

/*inicializa pines*/
void init_pines();

/*monitorea las alarmas que sean activado y regresa una cadena 
con los numeros de alarma activos */
void monitoring_alarm(char *msg);
