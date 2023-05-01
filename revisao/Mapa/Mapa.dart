main() {
  Map<String, double> notas = {'Ana': 9.7, 'Bea': 6.1, 'Ted': 7.9};

  for (var chave in notas.keys) {
    print('chave = $chave');
  }

  for (var valor in notas.values) {
    print('valor = $valor');
  }

  for (var registro in notas.entries) {
    print('${registro.key} = ${registro.value}');
  }
}
