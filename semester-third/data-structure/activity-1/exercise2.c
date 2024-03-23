#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define SIZE_NAME 20
#define MAX_AGE 60
#define SIZE_JOBS 5
#define JOBS_LIST "enfermeiro", "medico", "motorista", "motoboy", "atendente" 
#define PRIORITY_LIST "alta", "desconhecida"

char *Jobs[] = { JOBS_LIST };
char *Prioritys[] = { PRIORITY_LIST };

struct Patient{
  char name[SIZE_NAME];
  unsigned short age;
  char *job;
  char *priority;
};

bool checkJob(char job[]){
  for (int i = 0; i < SIZE_JOBS; i++) {
    if (strcmp(Jobs[i], job) == 0) { return true; } 
  }
  return false;
}

void checkPriority(struct Patient *patient){
  if (patient->age > MAX_AGE || checkJob(patient->job)){
    patient->priority=Prioritys[0];
  } else {
    patient->priority=Prioritys[1];
  }
  printf("Nome: %s\nIdade: %i\nProfissao: %s\nPrioridade: %s\n\n", 
      patient->name, patient->age, patient->job, patient->priority);
}

int main(){
  struct Patient *patient = malloc(sizeof(struct Patient));
  struct Patient *patientTwo = malloc(sizeof(struct Patient));
  char *jobAlternative = "Escritor";

  strcpy(patient->name, "Harry Mason");
  patient->age=32;
  patient->job=jobAlternative;
  checkPriority(patient);

  strcpy(patientTwo->name, "Cybil Bennett");
  patientTwo->age=22;
  patientTwo->job=Jobs[3];
  checkPriority(patientTwo);

  free(patient);
  free(patientTwo);
  return 0; 
}
