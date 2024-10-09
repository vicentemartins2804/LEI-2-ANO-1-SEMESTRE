/* 5.1 */
select * from CD

/* 5.2 */
Select * from MUSICA

/* A1 */
Select TITULO, DATACOMPRA from CD

/* A2 */
Select Distinct TITULO, DATACOMPRA from CD

/* A3 */
Select Distinct CODCD, INTERPRETE from MUSICA

/* A4 */
Select Distinct CODCD as "Código do CD", INTERPRETE from MUSICA

/* A5 */
SELECT TITULO, VALORPAGO, ROUND((VALORPAGO * 0.23) / 1.23, 2) AS VALORIVA FROM CD;

/* B1 */
Select * from MUSICA where CODCD = 2

/* B2 */
Select * from MUSICA where CODCD != 2

/* B3 */
Select * from MUSICA where CODCD = 2 and DURACAO between 4 and 6 

/* B4 */
Select * from MUSICA where CODCD = 2 and (DURACAO < 4 or DURACAO > 6)

/* B5 */
Select * from MUSICA where NRMUSICA = 1 or NRMUSICA = 3 or NRMUSICA = 5 or NRMUSICA = 6

/* B6 */
Select * from MUSICA where NRMUSICA != 1 and NRMUSICA != 3 and NRMUSICA != 5 and NRMUSICA != 6

/* B7 */
Select * from MUSICA where INTERPRETE like '%Orquestra%'

/* B8 */
Select * from MUSICA where LOWER(INTERPRETE) like '%y%'

/* B9 */
Select * from MUSICA where LOWER(TITULO) like '%dal%'

/* B10 */
Select * from MUSICA where LOWER(TITULO) like '%!%%' ESCAPE '!'

/* B11 */
Select * from MUSICA where LOWER(TITULO) like 'd%' or LOWER(TITULO) like 'b%' or LOWER(TITULO) like 'h%'

/* B12 */
Select * from CD where LOCALCOMPRA is null

/* B13 */
Select * from CD where LOCALCOMPRA is not null

/* C1 */
Select TITULO from CD where LOWER(LOCALCOMPRA) like 'fnac'

/* C2 */
Select TITULO from CD where LOWER(LOCALCOMPRA) <> '%fnac%'

/* D1 */
Select TITULO from CD where LOWER(LOCALCOMPRA) <> '%fnac%' order by TITULO

/* D2 */
Select TITULO, DATACOMPRA from CD order by DATACOMPRA desc

/* D3 */
Select TITULO, LOCALCOMPRA from CD order by LOCALCOMPRA

/* D4 */
Select TITULO, VALORPAGO, ROUND((VALORPAGO * 0.23) / 1.23, 2) as VALORIVA from CD order by VALORIVA desc

/* D5 */
Select TITULO, DATACOMPRA from CD order by DATACOMPRA desc, TITULO asc

/* E1 */
Select count(Distinct LOCALCOMPRA) as QTD_LOCAIS_COMPRA from CD

/* E2 */
Select Sum(VALORPAGO) as TOTAL, Max(VALORPAGO) as MAIOR, Min(VALORPAGO) as MENOR from CD

/* E3 */
Select Round(Avg(DURACAO), 2) as DURACÃO_MÉDIA from MUSICA

/* E4 */
Select Sum(VALORPAGO) as TOTAL_VALOR_FNAC from CD where LOWER(LOCALCOMPRA) like '%fnac%'

/* E5 */
Select Max(VALORPAGO) - Min(VALORPAGO) from CD where LOWER(LOCALCOMPRA) like '%fnac%'