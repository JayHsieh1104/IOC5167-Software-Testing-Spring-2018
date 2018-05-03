pipeline {
    agent {
        docker {
            image 'gcc'
        }
    }
    stages {
		stage('git clone') {
			steps {
				git clone "https://github.com/JayHsieh1104/2018Spring-SoftwareTesting.git"
			}
		}
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
