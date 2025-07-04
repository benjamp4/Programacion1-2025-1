int tiempoTraslado(int redlinea1[27], int origen, int destino) {
    if (origen < 0 || destino < 0 || origen > 26 || destino > 26 || origen >= destino) {
        return -1;
    }

    int tiempo = 0;
    for (int i = origen + 1; i <= destino; ++i) {
        tiempo += redlinea1[i];
    }

    return tiempo;
}


