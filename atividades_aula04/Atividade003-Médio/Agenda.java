import java.util.ArrayList;
import java.util.Date;
import java.util.List;

class Compromisso {
    private final Date data;
    private final String hora;
    private final String descricao;

    public Compromisso(Date data, String hora, String descricao) {
        this.data = data;
        this.hora = hora;
        this.descricao = descricao;
    }

    public Date getData() {
        return data;
    }

    public String getHora() {
        return hora;
    }

    public String getDescricao() {
        return descricao;
    }
}

public class Agenda {
    private final List<Compromisso> compromissos;

    public Agenda() {
        compromissos = new ArrayList<>();
    }

    public void adicionarCompromisso(Compromisso compromisso) {
        compromissos.add(compromisso);
    }

    public List<Compromisso> getCompromissosData(Date data) {
        List<Compromisso> compromissosData = new ArrayList<>();
        for (Compromisso compromisso : compromissos) {
            if (compromisso.getData().equals(data)) {
                compromissosData.add(compromisso);
            }
        }
        return compromissosData;
    }

    public static void main(String[] args) {
        Agenda agenda = new Agenda();

        Compromisso compromisso1 = new Compromisso(new Date(2024, 3, 22), "09:00", "Reunião de equipe");
        Compromisso compromisso2 = new Compromisso(new Date(2024, 3, 22), "14:00", "Entrevista de emprego");

        agenda.adicionarCompromisso(compromisso1);
        agenda.adicionarCompromisso(compromisso2);

        List<Compromisso> compromissosData = agenda.getCompromissosData(new Date(2024, 3, 22));
        for (Compromisso compromisso : compromissosData) {
            System.out.println("Data: " + compromisso.getData() + ", Hora: " + compromisso.getHora() + ", Descrição: " + compromisso.getDescricao());
        }
    }
}
