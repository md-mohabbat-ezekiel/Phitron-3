class Shop:
    chart=[] #class attribute
    def __init__(self,buyer):
        self.buyer=buyer

    def add_to_chart(self,item):
        self.chart.append(item)

mehmed=Shop('MEHMED')
mehmed.add_to_chart('shoes')
mehmed.add_to_chart('phone')
print(mehmed.chart)

mohabbat=Shop('MOHABBAT')
mohabbat.add_to_chart('cap')
mohabbat.add_to_chart('watch')
print(mohabbat.chart)
# wrong anser mixing value randomly
