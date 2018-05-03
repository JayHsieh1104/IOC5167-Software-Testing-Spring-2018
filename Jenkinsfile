pipeline {
    agent {
        docker {
            image 'gcc'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'make -C HW1\Triangle_Problem'
            }
        }
        stage('Test') {
            steps {
                sh 'make -C HW1\Triangle_Problem test'
            }
        }
        stage('Clean') {
            steps {
                sh 'make -C HW1\Triangle_Problem clean'
            }
        }		
    }
}