/* сигнал2 */
/* более длинный сигнал */
#define LIMIT 10000
int store;
int count = 0; /* счетчик для организации задержки */
store = inp(97);
outp(97, 79);
while (count++ < LIMIT)
	; /* задержка на время работы пустого цикла */
outp(97, store);