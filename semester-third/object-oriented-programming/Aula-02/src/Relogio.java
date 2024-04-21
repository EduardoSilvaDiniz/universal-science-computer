public class Relogio {
    private int horas;
    private int minutos;

    public int getHoras() {
        return horas;
    }

    public int getMinutos() {
        return minutos;
    }

    public void setHora(int horas, int minutos){
        if (horas <= 24  && horas >= 0 && minutos <= 59 && minutos >= 0){
            this.horas = horas;
            this.minutos = minutos;
        }
    }
    public void incrementaMinuto(){
        if (minutos < 59) minutos++;
        else minutos = 0; horas++;
    }
    public String mostraHora(){
       return String.format(getHoras() + ":" + getMinutos());
    }
}
