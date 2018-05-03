pipeline {
    agent {
        docker {
            image 'gcc'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'HW1/Triangle_Problem -C make'
            }
        }
        stage('Test') {
            steps {
                sh 'HW1/Triangle_Problem -C make test'
            }
        }
        stage('Clean') {
            steps {
                sh 'HW1/Triangle_Problem -C make clean'
            }
        }		
    }
}